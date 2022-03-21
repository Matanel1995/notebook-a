#include <string>
#include "Direction.hpp"

using namespace std;
namespace ariel{
    class Notebook{
        public:
            Notebook();
            static string read(int page, int row, int col, ariel::Direction dir, int len);
            void write(int page, int row, int col, ariel::Direction dir, string const data);
            void erase(int page, int row, int col, ariel::Direction dir, int len);
            void show(int page);
    };
}