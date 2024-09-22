#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;
using namespace this_thread;

int main() {

    string text = "hi mizzy................................... ingat bukas sapag pasok!.....................sana makausap na kita personal........kasi....wala lang....................kapag may exam na..............goodluck!:))).................ahmm may want kasi akong sabihin hehe.........pano bato:(.......…..........…................meron ba.......................................akong...................................................,.. pag asa?:(";
  
    for(char c : text) {
        cout<<c;
        cout.flush();
   
        sleep_for(milliseconds(80));
    }
   
   
return 0;
}
