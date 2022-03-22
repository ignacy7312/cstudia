#include <iostream>

namespace wtf{
    int a = 15;
    namespace karol {
        
        void wydrukuj(void){
            printf("karol ryfer");
        }

    }
}

enum class Classes {

    IAD,
    PROG,
    WF,
    ANALIZA,
    METROLOGIA
};




int main(void){

    int a = 10;
    std::cout << a << ' ' << wtf::a << '\n';
    wtf::karol::wydrukuj();

    int zajecia = static_cast<int>(Classes::METROLOGIA);
    Classes sztynks = Classes(3);

    //std::cout << Classes::ANALIZA << std::endl; ok w przypadku enum
    //std::cout << Classes::sztynks << std::endl; ok w przypadku enum
    std::cout << zajecia << std::endl;

    return 0;
}