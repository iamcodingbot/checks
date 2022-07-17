#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;

CONTRACT checks : public contract {
  public:
    using contract::contract;

    struct badge_count {
      name badge;
      uint16_t count;
    };
  
  [[eosio::on_notify("org::createsimple")]] void cschecks (name creator, name badge, vector<name> parentbadge, string ipfsimage, string details);
  [[eosio::on_notify("org::creategotcha")]] void cgchecks (name creator, name badge, time_point_sec starttime, uint64_t cycle_length, uint8_t max_cap, string ipfsimage, string details);
  [[eosio::on_notify("org::createrollup")]] void crchecks (name creator, name badge, vector<badge_count> rollup_criteria, string ipfsimage, string details);
  [[eosio::on_notify("org::givegotcha")]] void ggchecks (name badge, name from, name to, uint8_t amount, string memo );
  [[eosio::on_notify("org::givesimple")]] void gschecks (name from, name to, name badge, string memo );
  [[eosio::on_notify("org::takerollup")]] void trchecks (name account, name badge);

  private:

};
