#include <iostream>
#include <string>
#include <map>

class Physic {
public:
    double density;
    std::string material;

    void info() const {
        std::cout << "Material: " << material;

                
    }
};

int main() {
    std::map<std::string, double> matir;

    
    matir["water"] = 1.0;
    matir["gold"] = 19.8;

    
    Physic mat;
    
    //std::cout << "Enter material name: ";
    mat.material="water";
    //std::cin >> mat.material; 
    //std::cout << "Enter material name (can contain spaces): ";
    //std::getline(std::cin, mat.material);

    
    

    mat.info();
    if (mat.material == "water") {
         mat.density=1.0;
         std::cout << ", Density: " << mat.density<<"sm/3"<<std::endl;
    }else if (mat.material == "gold"){
       mat.density= matir["gold"];
      std::cout << ", Density: " <<mat.density<<"sm/3";
       

    } else {
        std::cout << ", Density: не определено"; // Добавлена обработка для других материалов
    }

    
    
         return 0;
    }

   

