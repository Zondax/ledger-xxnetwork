/** ******************************************************************************
 *  (c) 2020 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ******************************************************************************* */

import Zemu, { DEFAULT_START_OPTIONS } from '@zondax/zemu'
import { newElixxirApp } from '@zondax/ledger-substrate'
import { APP_SEED, models } from './common'

const defaultOptions = {
  ...DEFAULT_START_OPTIONS,
  logging: true,
  custom: `-s "${APP_SEED}"`,
  X11: false,
}

jest.setTimeout(60000)

beforeAll(async () => {
  await Zemu.checkAndPullImage()
})

async function activateSecretMode(sim: any) {
  // Get to Zondax.ch menu
  for (let i = 0; i < 3; i += 1) {
    await sim.clickRight()
  }

  // Activate secret features
  for (let i = 0; i < 10; i += 1) {
    await sim.clickBoth('', false)
  }

  let reviewSteps = 6
  if (sim.startOptions.model === 'nanos') {
    reviewSteps = 7
  }

  // Review warning message
  for (let i = 0; i < reviewSteps; i += 1) {
    await sim.clickRight()
  }

  // Accept
  await sim.clickBoth()
}

describe('Standard', function () {
  test.skip.each(models)('main secret menu (%s)', async function (m) {
    const sim = new Zemu(m.path)
    try {
      await sim.start({ ...defaultOptions, model: m.name })
      const app = newElixxirApp(sim.getTransport())

      const elixxir_expected_address = '6VyMPt81px3X3ESyQwCjetyPS62ttyJm22fGAnWNkADLbPP2'
      const elixxir_expected_pk = '1dcca27d1ceeb141bd783eda1fa49b72eb5868c5e3bbd56021a1734000f5bd59'
      const polkadot_expected_address = '6aQDiGgb1KMdBLr8pwyHPrJsUCsmaYfUre1L5u94dr5oWSNT'
      const polkadot_expected_pk = 'e1b4d72d27b3e91b9b6116555b4ea17138ddc12ca7cdbab30e2e0509bd848419'

      let resp = await app.getAddress(0x80000000, 0x80000000, 0x80000000)
      console.log(resp)
      expect(resp.address).toEqual(elixxir_expected_address)
      expect(resp.pubKey).toEqual(elixxir_expected_pk)

      await activateSecretMode(sim)

      resp = await app.getAddress(0x80000000, 0x80000000, 0x80000000)
      console.log(resp)
      expect(resp.address).toEqual(polkadot_expected_address)
      expect(resp.pubKey).toEqual(polkadot_expected_pk)
    } finally {
      await sim.close()
    }
  })
})
