#pragma once
#include <CreateCoin/plugins/json_rpc/utility.hpp>

#include <CreateCoin/protocol/types.hpp>

#include <fc/optional.hpp>
#include <fc/variant.hpp>
#include <fc/vector.hpp>

namespace CreateCoin { namespace plugins { namespace account_by_key {

namespace detail
{
   class account_by_key_api_impl;
}

struct get_key_references_args
{
   std::vector< CreateCoin::protocol::public_key_type > keys;
};

struct get_key_references_return
{
   std::vector< std::vector< CreateCoin::protocol::account_name_type > > accounts;
};

class account_by_key_api
{
   public:
      account_by_key_api();
      ~account_by_key_api();

      DECLARE_API( (get_key_references) )

   private:
      std::unique_ptr< detail::account_by_key_api_impl > my;
};

} } } // CreateCoin::plugins::account_by_key

FC_REFLECT( CreateCoin::plugins::account_by_key::get_key_references_args,
   (keys) )

FC_REFLECT( CreateCoin::plugins::account_by_key::get_key_references_return,
   (accounts) )
