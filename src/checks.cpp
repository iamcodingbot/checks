#include <checks.hpp>

  void checks::cschecks (name creator, name badge, vector<name> parentbadge, string ipfsimage, string details) {
    check(true, "unauthorized");
  }
  void checks::cgchecks (name creator, name badge, time_point_sec starttime, uint64_t cycle_length, uint8_t max_cap, string ipfsimage, string details) {
    check(true, "unauthorized");
  }
  void checks::crchecks (name creator, name badge, vector<badge_count> rollup_criteria, string ipfsimage, string details) {
    check(true, "unauthorized");
  }
  void checks::ggchecks (name badge, name from, name to, uint8_t amount, string memo ) {
    check(true, "unauthorized");
  }
  void checks::gschecks (name from, name to, name badge, string memo ) {
    check(true, "unauthorized");
  }
  void checks::trchecks (name account, name badge) {
    check(true, "unauthorized");
  }


