#pragma once

#include <CreateCoin/protocol/CreateCoin_required_actions.hpp>

#include <CreateCoin/protocol/operation_util.hpp>

namespace CreateCoin { namespace protocol {

   /** NOTE: do not change the order of any actions or it will trigger a hardfork.
    */
   typedef fc::static_variant<
#ifdef IS_TEST_NET
            example_required_action
#endif
         > required_automated_action;

} } // CreateCoin::protocol

CreateCoin_DECLARE_OPERATION_TYPE( CreateCoin::protocol::required_automated_action );

FC_TODO( "Remove ifdef when first required automated action is added" )
#ifdef IS_TEST_NET
FC_REFLECT_TYPENAME( CreateCoin::protocol::required_automated_action );
#endif
