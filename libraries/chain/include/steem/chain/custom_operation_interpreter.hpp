
#pragma once

#include <memory>

#include <CreateCoin/protocol/types.hpp>

namespace CreateCoin { namespace schema {
   struct abstract_schema;
} }

namespace CreateCoin { namespace protocol {
   struct custom_json_operation;
} }

namespace CreateCoin { namespace chain {

class custom_operation_interpreter
{
   public:
      virtual void apply( const protocol::custom_json_operation& op ) = 0;
      virtual void apply( const protocol::custom_binary_operation & op ) = 0;
      virtual CreateCoin::protocol::custom_id_type get_custom_id() = 0;
      virtual std::shared_ptr< CreateCoin::schema::abstract_schema > get_operation_schema() = 0;
};

} } // CreateCoin::chain
