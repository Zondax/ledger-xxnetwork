import { DeviceModel } from '@zondax/zemu'

const Resolve = require('path').resolve

export const APP_SEED = 'equip will roof matter pink blind book anxiety banner elbow sun young'

const APP_PATH_S = Resolve('../app/output/app_s.elf')
const APP_PATH_X = Resolve('../app/output/app_x.elf')

export const models: DeviceModel[] = [
  { name: 'nanos', prefix: 'S', path: APP_PATH_S },
  { name: 'nanox', prefix: 'X', path: APP_PATH_X },
]

export const txBasic =
  '040000c1a4325a2967b2add66e9fbb0fecfdc996a2d6724fa3ef3985f1ace88b69f44033158139ae28a3dfaac5fe1560a5e9e05cd503ae11030003d2029649c80000000100000050dd5d206917bf10502c68fb4d18a59fc8aa31586f4e8856b493e43544aa82aa50dd5d206917bf10502c68fb4d18a59fc8aa31586f4e8856b493e43544aa82aa'

export const txNomination =
  '060504001d0810f3d4607b48dd260a1c24c5a1a9501ba4f75bd1da4f418796afd0808670d503ae1103000b63ce64c10c05c80000000100000050dd5d206917bf10502c68fb4d18a59fc8aa31586f4e8856b493e43544aa82aa50dd5d206917bf10502c68fb4d18a59fc8aa31586f4e8856b493e43544aa82aa'

export const setKeys =
    '0900ab1ad94c2bcd859affebe4ef599c9adf170a5139d3bd7c887aa6ebb3114356d01c6933d37becfd9c5d814c015582f784d5a85551a0f5819cc9225d649e71fe9cf817eb9cb80a4968426f2bf5b55c3d105413fc2e72784fc5e6c952798818ecfbc1a40b49927b018dbecf5ffc3a11e73ac3ca5e297716865345439057badcb9e680c37ab0a59bd12e6d232f51cbf19975be0d7f949c953abab53e8571b6bdd6a611d503910103d2029649c80000000100000050dd5d206917bf10502c68fb4d18a59fc8aa31586f4e8856b493e43544aa82aa50dd5d206917bf10502c68fb4d18a59fc8aa31586f4e8856b493e43544aa82aa'
