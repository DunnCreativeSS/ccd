#pragma once
#include <CreateCoin/plugins/json_rpc/json_rpc_plugin.hpp>
#include <CreateCoin/plugins/database_api/database_api_plugin.hpp>
#include <CreateCoin/plugins/block_api/block_api_plugin.hpp>

#define CreateCoin_CONDENSER_API_PLUGIN_NAME "condenser_api"

namespace CreateCoin { namespace plugins { namespace condenser_api {

using namespace appbase;

class condenser_api_plugin : public appbase::plugin< condenser_api_plugin >
{
public:
   APPBASE_PLUGIN_REQUIRES( (CreateCoin::plugins::json_rpc::json_rpc_plugin)(CreateCoin::plugins::database_api::database_api_plugin) )

   condenser_api_plugin();
   virtual ~condenser_api_plugin();

   static const std::string& name() { static std::string name = CreateCoin_CONDENSER_API_PLUGIN_NAME; return name; }

   virtual void set_program_options( options_description& cli, options_description& cfg ) override;

   virtual void plugin_initialize( const variables_map& options ) override;
   virtual void plugin_startup() override;
   virtual void plugin_shutdown() override;

   std::shared_ptr< class condenser_api > api;
};

} } } // CreateCoin::plugins::condenser_api
