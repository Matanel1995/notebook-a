#include <string>
#include "Direction.hpp"
#include "Notebook.hpp"

using namespace std;
namespace ariel{
    Notebook::Notebook(){
        return;
    }
    string Notebook::read(int page, int row, int col, ariel::Direction dir, int len){
        return "";
    }
    void Notebook::write(int page, int row, int col, ariel::Direction dir, string data){
        return;
    }
    void Notebook::erase(int page, int row, int col, ariel::Direction dir, int len){
        return;
    }
    void Notebook::show(int page){
        return;
    }
}