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
  
  ACTION cschecks (name creator, name badge, vector<name> parentbadge, string ipfsimage, string details);
  ACTION cgchecks (name creator, name badge, time_point_sec starttime, uint64_t cycle_length, uint8_t max_cap, string ipfsimage, string details);
  ACTION crchecks (name creator, name badge, vector<badge_count> rollup_criteria, string ipfsimage, string details);
  ACTION ggchecks (name badge, name from, name to, uint8_t amount, string memo );
  ACTION gschecks (name from, name to, name badge, string memo );
  ACTION trchecks (name account, name badge);

  private:

};
