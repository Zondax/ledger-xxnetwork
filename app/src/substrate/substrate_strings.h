/*******************************************************************************
 *  (c) 2019 - 2022 Zondax GmbH
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
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Modules names
static const char* STR_MO_SYSTEM = "System";
static const char* STR_MO_TIMESTAMP = "Timestamp";
static const char* STR_MO_BALANCES = "Balances";
static const char* STR_MO_STAKING = "Staking";
static const char* STR_MO_SESSION = "Session";
static const char* STR_MO_GRANDPA = "Grandpa";
static const char* STR_MO_COUNCIL = "Council";
static const char* STR_MO_TECHNICALCOMMITTEE = "Technicalcommittee";
static const char* STR_MO_ELECTIONS = "Elections";
static const char* STR_MO_TECHNICALMEMBERSHIP = "Technicalmembership";
static const char* STR_MO_TREASURY = "Treasury";
static const char* STR_MO_CLAIMS = "Claims";
static const char* STR_MO_VESTING = "Vesting";
static const char* STR_MO_UTILITY = "Utility";
static const char* STR_MO_IDENTITY = "Identity";
static const char* STR_MO_PROXY = "Proxy";
static const char* STR_MO_BOUNTIES = "Bounties";
static const char* STR_MO_TIPS = "Tips";
static const char* STR_MO_CHAINBRIDGE = "Chainbridge";
static const char* STR_MO_SWAP = "Swap";
static const char* STR_MO_XXCMIX = "Xxcmix";
static const char* STR_MO_XXECONOMICS = "Xxeconomics";
static const char* STR_MO_XXCUSTODY = "Xxcustody";
static const char* STR_MO_XXBETANETREWARDS = "Xxbetanetrewards";
static const char* STR_MO_XXPUBLIC = "Xxpublic";
static const char* STR_MO_MULTISIG = "Multisig";
static const char* STR_MO_RECOVERY = "Recovery";
static const char* STR_MO_ASSETS = "Assets";
static const char* STR_MO_UNIQUES = "Uniques";

// Methods names
static const char* STR_ME_FILL_BLOCK = "Fill block";
static const char* STR_ME_REMARK = "Remark";
static const char* STR_ME_SET_HEAP_PAGES = "Set heap pages";
static const char* STR_ME_SET_CODE = "Set code";
static const char* STR_ME_SET_CODE_WITHOUT_CHECKS = "Set code without checks";
static const char* STR_ME_REMARK_WITH_EVENT = "Remark with event";
static const char* STR_ME_SET = "Set";
static const char* STR_ME_TRANSFER = "Transfer";
static const char* STR_ME_SET_BALANCE = "Set balance";
static const char* STR_ME_FORCE_TRANSFER = "Force transfer";
static const char* STR_ME_TRANSFER_KEEP_ALIVE = "Transfer keep alive";
static const char* STR_ME_TRANSFER_ALL = "Transfer all";
static const char* STR_ME_FORCE_UNRESERVE = "Force unreserve";
static const char* STR_ME_BOND = "Bond";
static const char* STR_ME_BOND_EXTRA = "Bond extra";
static const char* STR_ME_UNBOND = "Unbond";
static const char* STR_ME_WITHDRAW_UNBONDED = "Withdraw Unbonded";
static const char* STR_ME_VALIDATE = "Validate";
static const char* STR_ME_NOMINATE = "Nominate";
static const char* STR_ME_CHILL = "Chill";
static const char* STR_ME_SET_CONTROLLER = "Set controller";
static const char* STR_ME_SET_VALIDATOR_COUNT = "Set validator count";
static const char* STR_ME_INCREASE_VALIDATOR_COUNT = "Increase validator count";
static const char* STR_ME_FORCE_NO_ERAS = "Force no eras";
static const char* STR_ME_FORCE_NEW_ERA = "Force new era";
static const char* STR_ME_SET_INVULNERABLES = "Set invulnerables";
static const char* STR_ME_FORCE_UNSTAKE = "Force unstake";
static const char* STR_ME_FORCE_NEW_ERA_ALWAYS = "Force new era always";
static const char* STR_ME_CANCEL_DEFERRED_SLASH = "Cancel deferred slash";
static const char* STR_ME_PAYOUT_STAKERS = "Payout stakers";
static const char* STR_ME_REBOND = "Rebond";
static const char* STR_ME_SET_HISTORY_DEPTH = "Set history depth";
static const char* STR_ME_REAP_STASH = "Reap stash";
static const char* STR_ME_KICK = "Kick";
static const char* STR_ME_CHILL_OTHER = "Chill other";
static const char* STR_ME_SET_CMIX_ID = "Set cmix id";
static const char* STR_ME_TRANSFER_CMIX_ID = "Transfer cmix id";
static const char* STR_ME_SET_KEYS = "Set keys";
static const char* STR_ME_PURGE_KEYS = "Purge keys";
static const char* STR_ME_NOTE_STALLED = "Note stalled";
static const char* STR_ME_SET_MEMBERS = "Set members";
static const char* STR_ME_VOTE = "Vote";
static const char* STR_ME_CLOSE = "Close";
static const char* STR_ME_DISAPPROVE_PROPOSAL = "Disapprove proposal";
static const char* STR_ME_REMOVE_VOTER = "Remove voter";
static const char* STR_ME_SUBMIT_CANDIDACY = "Submit candidacy";
static const char* STR_ME_REMOVE_MEMBER = "Remove member";
static const char* STR_ME_CLEAN_DEFUNCT_VOTERS = "Clean defunct voters";
static const char* STR_ME_ADD_MEMBER = "Add member";
static const char* STR_ME_SWAP_MEMBER = "Swap member";
static const char* STR_ME_RESET_MEMBERS = "Reset members";
static const char* STR_ME_CHANGE_KEY = "Change key";
static const char* STR_ME_SET_PRIME = "Set prime";
static const char* STR_ME_CLEAR_PRIME = "Clear prime";
static const char* STR_ME_PROPOSE_SPEND = "Propose spend";
static const char* STR_ME_REJECT_PROPOSAL = "Reject proposal";
static const char* STR_ME_APPROVE_PROPOSAL = "Approve proposal";
static const char* STR_ME_CLAIM = "Claim";
static const char* STR_ME_CLAIM_ATTEST = "Claim attest";
static const char* STR_ME_ATTEST = "Attest";
static const char* STR_ME_MOVE_CLAIM = "Move claim";
static const char* STR_ME_VEST = "Vest";
static const char* STR_ME_VEST_OTHER = "Vest other";
static const char* STR_ME_MERGE_SCHEDULES = "Merge schedules";
static const char* STR_ME_BATCH = "Batch";
static const char* STR_ME_BATCH_ALL = "Batch all";
static const char* STR_ME_ADD_REGISTRAR = "Add registrar";
static const char* STR_ME_CLEAR_IDENTITY = "Clear identity";
static const char* STR_ME_REQUEST_JUDGEMENT = "Request judgement";
static const char* STR_ME_CANCEL_REQUEST = "Cancel request";
static const char* STR_ME_SET_FEE = "Set fee";
static const char* STR_ME_SET_ACCOUNT_ID = "Set account id";
static const char* STR_ME_KILL_IDENTITY = "Kill identity";
static const char* STR_ME_REMOVE_SUB = "Remove sub";
static const char* STR_ME_QUIT_SUB = "Quit sub";
static const char* STR_ME_PROXY = "Proxy";
static const char* STR_ME_ADD_PROXY = "Add proxy";
static const char* STR_ME_REMOVE_PROXY = "Remove proxy";
static const char* STR_ME_REMOVE_PROXIES = "Remove proxies";
static const char* STR_ME_ANONYMOUS = "Anonymous";
static const char* STR_ME_KILL_ANONYMOUS = "Kill anonymous";
static const char* STR_ME_ANNOUNCE = "Announce";
static const char* STR_ME_REMOVE_ANNOUNCEMENT = "Remove announcement";
static const char* STR_ME_REJECT_ANNOUNCEMENT = "Reject announcement";
static const char* STR_ME_PROXY_ANNOUNCED = "Proxy announced";
static const char* STR_ME_PROPOSE_BOUNTY = "Propose bounty";
static const char* STR_ME_APPROVE_BOUNTY = "Approve bounty";
static const char* STR_ME_PROPOSE_CURATOR = "Propose curator";
static const char* STR_ME_UNASSIGN_CURATOR = "Unassign curator";
static const char* STR_ME_ACCEPT_CURATOR = "Accept curator";
static const char* STR_ME_AWARD_BOUNTY = "Award bounty";
static const char* STR_ME_CLAIM_BOUNTY = "Claim bounty";
static const char* STR_ME_CLOSE_BOUNTY = "Close bounty";
static const char* STR_ME_EXTEND_BOUNTY_EXPIRY = "Extend bounty expiry";
static const char* STR_ME_REPORT_AWESOME = "Report awesome";
static const char* STR_ME_RETRACT_TIP = "Retract tip";
static const char* STR_ME_TIP_NEW = "Tip new";
static const char* STR_ME_TIP = "Tip";
static const char* STR_ME_CLOSE_TIP = "Close tip";
static const char* STR_ME_SLASH_TIP = "Slash tip";
static const char* STR_ME_SET_THRESHOLD = "Set threshold";
static const char* STR_ME_REMOVE_RESOURCE = "Remove resource";
static const char* STR_ME_ADD_RELAYER = "Add relayer";
static const char* STR_ME_REMOVE_RELAYER = "Remove relayer";
static const char* STR_ME_SET_SWAP_FEE = "Set swap fee";
static const char* STR_ME_SET_FEE_DESTINATION = "Set fee destination";
static const char* STR_ME_SET_SCHEDULING_ACCOUNT = "Set scheduling account";
static const char* STR_ME_SET_CMIX_ADDRESS_SPACE = "Set cmix address space";
static const char* STR_ME_SET_ADMIN_PERMISSION = "Set admin permission";
static const char* STR_ME_SET_LIQUIDITY_REWARDS_STAKE = "Set liquidity rewards stake";
static const char* STR_ME_SET_LIQUIDITY_REWARDS_BALANCE = "Set liquidity rewards balance";
static const char* STR_ME_PAYOUT = "Payout";
static const char* STR_ME_CUSTODY_BOND = "Custody bond";
static const char* STR_ME_CUSTODY_BOND_EXTRA = "Custody bond extra";
static const char* STR_ME_CUSTODY_SET_CONTROLLER = "Custody set controller";
static const char* STR_ME_CUSTODY_SET_PROXY = "Custody set proxy";
static const char* STR_ME_TEAM_CUSTODY_SET_PROXY = "Team custody set proxy";
static const char* STR_ME_ADD_CUSTODIAN = "Add custodian";
static const char* STR_ME_REMOVE_CUSTODIAN = "Remove custodian";
static const char* STR_ME_REPLACE_TEAM_MEMBER = "Replace team member";
static const char* STR_ME_APPROVE = "Approve";
static const char* STR_ME_SET_TESTNET_MANAGER_ACCOUNT = "Set testnet manager account";
static const char* STR_ME_AS_MULTI_THRESHOLD_1 = "As multi threshold 1";
static const char* STR_ME_AS_MULTI = "As multi";
static const char* STR_ME_APPROVE_AS_MULTI = "Approve as multi";
static const char* STR_ME_CANCEL_AS_MULTI = "Cancel as multi";
static const char* STR_ME_SET_RECOVERED = "Set recovered";
static const char* STR_ME_INITIATE_RECOVERY = "Initiate recovery";
static const char* STR_ME_VOUCH_RECOVERY = "Vouch recovery";
static const char* STR_ME_CLAIM_RECOVERY = "Claim recovery";
static const char* STR_ME_CLOSE_RECOVERY = "Close recovery";
static const char* STR_ME_REMOVE_RECOVERY = "Remove recovery";
static const char* STR_ME_CANCEL_RECOVERED = "Cancel recovered";
static const char* STR_ME_FORCE_CREATE = "Force create";
static const char* STR_ME_MINT = "Mint";
static const char* STR_ME_BURN = "Burn";
static const char* STR_ME_FREEZE = "Freeze";
static const char* STR_ME_THAW = "Thaw";
static const char* STR_ME_FREEZE_ASSET = "Freeze asset";
static const char* STR_ME_THAW_ASSET = "Thaw asset";
static const char* STR_ME_TRANSFER_OWNERSHIP = "Transfer ownership";
static const char* STR_ME_SET_TEAM = "Set team";
static const char* STR_ME_SET_METADATA = "Set metadata";
static const char* STR_ME_CLEAR_METADATA = "Clear metadata";
static const char* STR_ME_FORCE_SET_METADATA = "Force set metadata";
static const char* STR_ME_FORCE_CLEAR_METADATA = "Force clear metadata";
static const char* STR_ME_FORCE_ASSET_STATUS = "Force asset status";
static const char* STR_ME_APPROVE_TRANSFER = "Approve transfer";
static const char* STR_ME_CANCEL_APPROVAL = "Cancel approval";
static const char* STR_ME_FORCE_CANCEL_APPROVAL = "Force cancel approval";
static const char* STR_ME_TRANSFER_APPROVED = "Transfer approved";
static const char* STR_ME_CREATE = "Create";
static const char* STR_ME_FREEZE_CLASS = "Freeze class";
static const char* STR_ME_THAW_CLASS = "Thaw class";
static const char* STR_ME_CLEAR_CLASS_METADATA = "Clear class metadata";

// Items names
static const char* STR_IT_ratio = "Ratio";
static const char* STR_IT_remark = "Remark";
static const char* STR_IT_pages = "Pages";
static const char* STR_IT_code = "Code";
static const char* STR_IT_items = "Items";
static const char* STR_IT_keys = "Keys";
static const char* STR_IT_prefix = "Prefix";
static const char* STR_IT_subkeys = "Subkeys";
static const char* STR_IT_now = "Now";
static const char* STR_IT_dest = "Dest";
static const char* STR_IT_amount = "Amount";
static const char* STR_IT_who = "Who";
static const char* STR_IT_new_free = "New free";
static const char* STR_IT_new_reserved = "New reserved";
static const char* STR_IT_source = "Source";
static const char* STR_IT_keep_alive = "Keep alive";
static const char* STR_IT_controller = "Controller";
static const char* STR_IT_cmix_id = "Cmix id";
static const char* STR_IT_num_slashing_spans = "Num slashing spans";
static const char* STR_IT_prefs = "Prefs";
static const char* STR_IT_targets = "Targets";
static const char* STR_IT_new_ = "New";
static const char* STR_IT_additional = "Additional";
static const char* STR_IT_factor = "Factor";
static const char* STR_IT_invulnerables = "Invulnerables";
static const char* STR_IT_stash = "Stash";
static const char* STR_IT_era = "Era";
static const char* STR_IT_slash_indices = "Slash indices";
static const char* STR_IT_validator_stash = "Validator stash";
static const char* STR_IT_new_history_depth = "New history depth";
static const char* STR_IT_era_items_deleted = "Era items deleted";
static const char* STR_IT_min_nominator_bond = "Min nominator bond";
static const char* STR_IT_min_validator_bond = "Min validator bond";
static const char* STR_IT_max_nominator_count = "Max nominator count";
static const char* STR_IT_max_validator_count = "Max validator count";
static const char* STR_IT_threshold = "Threshold";
static const char* STR_IT_min_commission = "Min commission";
static const char* STR_IT_proof = "Proof";
static const char* STR_IT_equivocation_proof = "Equivocation proof";
static const char* STR_IT_key_owner_proof = "Key owner proof";
static const char* STR_IT_delay = "Delay";
static const char* STR_IT_best_finalized_block_number = "Best finalized block number";
static const char* STR_IT_new_members = "New members";
static const char* STR_IT_prime = "Prime";
static const char* STR_IT_old_count = "Old count";
static const char* STR_IT_proposal = "Proposal";
static const char* STR_IT_length_bound = "Length bound";
static const char* STR_IT_index = "Index";
static const char* STR_IT_approve = "Approve";
static const char* STR_IT_proposal_hash = "Proposal hash";
static const char* STR_IT_proposal_weight_bound = "Proposal weight bound";
static const char* STR_IT_votes = "Votes";
static const char* STR_IT_candidate_count = "Candidate count";
static const char* STR_IT_renouncing = "Renouncing";
static const char* STR_IT_has_replacement = "Has replacement";
static const char* STR_IT_num_voters = "Num voters";
static const char* STR_IT_num_defunct = "Num defunct";
static const char* STR_IT_remove = "Remove";
static const char* STR_IT_add = "Add";
static const char* STR_IT_members = "Members";
static const char* STR_IT_beneficiary = "Beneficiary";
static const char* STR_IT_proposal_id = "Proposal id";
static const char* STR_IT_ethereum_signature = "Ethereum signature";
static const char* STR_IT_vesting_schedules = "Vesting schedules";
static const char* STR_IT_statement = "Statement";
static const char* STR_IT_old = "Old";
static const char* STR_IT_maybe_preclaim = "Maybe preclaim";
static const char* STR_IT_target = "Target";
static const char* STR_IT_schedule = "Schedule";
static const char* STR_IT_schedule1_index = "Schedule1 index";
static const char* STR_IT_schedule2_index = "Schedule2 index";
static const char* STR_IT_calls = "Calls";
static const char* STR_IT_call = "Call";
static const char* STR_IT_as_origin = "As origin";
static const char* STR_IT_account = "Account";
static const char* STR_IT_info = "Info";
static const char* STR_IT_subs = "Subs";
static const char* STR_IT_reg_index = "Reg index";
static const char* STR_IT_max_fee = "Max fee";
static const char* STR_IT_fee = "Fee";
static const char* STR_IT_fields = "Fields";
static const char* STR_IT_judgement = "Judgement";
static const char* STR_IT_sub = "Sub";
static const char* STR_IT_data = "Data";
static const char* STR_IT_real = "Real";
static const char* STR_IT_force_proxy_type = "Force proxy type";
static const char* STR_IT_delegate = "Delegate";
static const char* STR_IT_proxy_type = "Proxy type";
static const char* STR_IT_spawner = "Spawner";
static const char* STR_IT_height = "Height";
static const char* STR_IT_ext_index = "Ext index";
static const char* STR_IT_call_hash = "Call hash";
static const char* STR_IT_description = "Description";
static const char* STR_IT_bounty_id = "Bounty id";
static const char* STR_IT_curator = "Curator";
static const char* STR_IT_reason = "Reason";
static const char* STR_IT_hash = "Hash";
static const char* STR_IT_tip_value = "Tip value";
static const char* STR_IT_id = "Id";
static const char* STR_IT_method = "Method";
static const char* STR_IT_v = "V";
static const char* STR_IT_nonce = "Nonce";
static const char* STR_IT_src_id = "Src id";
static const char* STR_IT_r_id = "R id";
static const char* STR_IT_prop = "Prop";
static const char* STR_IT_recipient = "Recipient";
static const char* STR_IT_dest_id = "Dest id";
static const char* STR_IT_to = "To";
static const char* STR_IT_hashes = "Hashes";
static const char* STR_IT_variables = "Variables";
static const char* STR_IT_size = "Size";
static const char* STR_IT_permission = "Permission";
static const char* STR_IT_params = "Params";
static const char* STR_IT_points = "Points";
static const char* STR_IT_custody = "Custody";
static const char* STR_IT_proxy = "Proxy";
static const char* STR_IT_custodian = "Custodian";
static const char* STR_IT_option = "Option";
static const char* STR_IT_other_signatories = "Other signatories";
static const char* STR_IT_maybe_timepoint = "Maybe timepoint";
static const char* STR_IT_store_call = "Store call";
static const char* STR_IT_max_weight = "Max weight";
static const char* STR_IT_timepoint = "Timepoint";
static const char* STR_IT_lost = "Lost";
static const char* STR_IT_rescuer = "Rescuer";
static const char* STR_IT_friends = "Friends";
static const char* STR_IT_delay_period = "Delay period";
static const char* STR_IT_admin = "Admin";
static const char* STR_IT_min_balance = "Min balance";
static const char* STR_IT_owner = "Owner";
static const char* STR_IT_is_sufficient = "Is sufficient";
static const char* STR_IT_witness = "Witness";
static const char* STR_IT_issuer = "Issuer";
static const char* STR_IT_freezer = "Freezer";
static const char* STR_IT_name = "Name";
static const char* STR_IT_symbol = "Symbol";
static const char* STR_IT_decimals = "Decimals";
static const char* STR_IT_is_frozen = "Is frozen";
static const char* STR_IT_destination = "Destination";
static const char* STR_IT_class_ = "Class";
static const char* STR_IT_free_holding = "Free holding";
static const char* STR_IT_instance = "Instance";
static const char* STR_IT_check_owner = "Check owner";
static const char* STR_IT_instances = "Instances";
static const char* STR_IT_maybe_check_delegate = "Maybe check delegate";
static const char* STR_IT_maybe_instance = "Maybe instance";
static const char* STR_IT_key = "Key";
static const char* STR_IT_value = "Value";

#ifdef __cplusplus
}
#endif
