#include <array>

class sukodu {
  std::array<std::array<int, 9>, 9> data;
  std::array<std::array<int, 9>, 9> draft;

  bool check1to9(int val) { return val >= 1 && val <= 9; }

public:
  sukodu() {
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        data[i][j] = 0;
        draft[i][j] = 0b111111111;
      }
    }
  }
  bool setVal(int x, int y, int val) {
    if (check1to9(x) && check1to9(y) && check1to9(val)) {
      return true;
    } else {
      return true;
    }
  }
};