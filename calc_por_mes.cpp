#include <iostream>
#include <iomanip>

float lucro,custo;
int diaAtual,quantidade,day, roi,mes=30;
// O ROI (Return on Investment) é calculado como o retorno sobre o investimento, que é o lucro obtido dividido pelo custo do investimento.
// Neste caso, o ROI é calculado como o lucro total obtido com a venda das plantas dividido pelo custo total de plantar as mesmas plantas.

int main(){
    std::cout << "Bem vindo ao calculador de ROI!\n";
    std::cout << "Este programa calcula o retorno sobre o investimento (ROI) de plantar e colher plantas.\n";
    std::cout << "Dia que plantou ou vai plantar:\n";
    std::cin >> diaAtual;//Limite Dia 25;
    std::cout << "Quantidade que deseja plantar:\n";
    std::cin >> quantidade;
    std::cout << "Dias totais para a planta crescer:\n";
    std::cin>> day;//Dias para colher!
    std::cout << "Custo por cada planta?\n";
    std::cin>> custo;
    std::cout << "Lucro por cada planta?\n";
    std::cin>> lucro;

    roi=((mes-diaAtual)/day);//Roi é o calculo do Mês divido pelos dias, não pode ser maior que o mes!
    if(roi < 2){
        std::cout << "voce nao pode cultivar, nao tem mais tempo!";
        system("pause");
        return 0;
    }
    std::cout << "Voce recebera $" << std::fixed<<std::setprecision(0)<< quantidade*(lucro+custo) << " ao vender " << quantidade << " unidades" <<std::endl;
    std::cout << "voce pode cultivar " << std::fixed<<std::setprecision(0)<< roi << " vezes com a mesma quantidade de " << quantidade <<", lucro $"<< roi*quantidade*lucro << " total $" << roi*quantidade*(lucro+custo) << std::endl;
    system("pause");
    return 0;
}