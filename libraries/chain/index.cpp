
#include <CreateCoin/chain/CreateCoin_fwd.hpp>

#include <CreateCoin/chain/index.hpp>

#include <CreateCoin/chain/block_summary_object.hpp>
#include <CreateCoin/chain/history_object.hpp>
#include <CreateCoin/chain/pending_required_action_object.hpp>
#include <CreateCoin/chain/pending_optional_action_object.hpp>
#include <CreateCoin/chain/smt_objects.hpp>
#include <CreateCoin/chain/CreateCoin_objects.hpp>
#include <CreateCoin/chain/transaction_object.hpp>
#include <CreateCoin/chain/witness_schedule.hpp>

namespace CreateCoin { namespace chain {

void initialize_core_indexes( database& db )
{
   add_core_index< dynamic_global_property_index           >( db );
   add_core_index< account_index                           >( db );
   add_core_index< account_authority_index                 >( db );
   add_core_index< witness_index                           >( db );
   add_core_index< transaction_index                       >( db );
   add_core_index< block_summary_index                     >( db );
   add_core_index< witness_schedule_index                  >( db );
   add_core_index< comment_index                           >( db );
   add_core_index< comment_content_index                   >( db );
   add_core_index< comment_vote_index                      >( db );
   add_core_index< witness_vote_index                      >( db );
   add_core_index< limit_order_index                       >( db );
   add_core_index< feed_history_index                      >( db );
   add_core_index< convert_request_index                   >( db );
   add_core_index< liquidity_reward_balance_index          >( db );
   add_core_index< operation_index                         >( db );
   add_core_index< account_history_index                   >( db );
   add_core_index< hardfork_property_index                 >( db );
   add_core_index< withdraw_vesting_route_index            >( db );
   add_core_index< owner_authority_history_index           >( db );
   add_core_index< account_recovery_request_index          >( db );
   add_core_index< change_recovery_account_request_index   >( db );
   add_core_index< escrow_index                            >( db );
   add_core_index< savings_withdraw_index                  >( db );
   add_core_index< decline_voting_rights_request_index     >( db );
   add_core_index< reward_fund_index                       >( db );
   add_core_index< vesting_delegation_index                >( db );
   add_core_index< vesting_delegation_expiration_index     >( db );
   add_core_index< pending_required_action_index           >( db );
   add_core_index< pending_optional_action_index           >( db );
#ifdef CreateCoin_ENABLE_SMT
   add_core_index< smt_token_index                         >( db );
   add_core_index< smt_event_token_index                   >( db );
   add_core_index< account_regular_balance_index           >( db );
   add_core_index< account_rewards_balance_index           >( db );
   add_core_index< nai_pool_index                          >( db );
   add_core_index< smt_token_emissions_index               >( db );
#endif
}

index_info::index_info() {}
index_info::~index_info() {}

} }
