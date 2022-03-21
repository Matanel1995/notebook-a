#include <string>
#include "Direction.hpp"

using namespace std;
namespace ariel{
    class Notebook{
        private:
            int pages;
            int rows;
            int cols;
            Direction dir;
        public:
            Notebook();
            string read(int page, int row, int col, ariel::Direction dir, int len);
            void write(int page, int row, int col, ariel::Direction dir, string data);
            void erase(int page, int row, int col, ariel::Direction dir, int l1en);
            void show(int len);
    };
}