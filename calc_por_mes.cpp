#include <iostream>
#include <iomanip>

float lucro,custo;
int diaAtual,quantidade,dia, roi;
const int mes = 28;//todas as estações tem 28 dias.
// O ROI (Return on Investment) é calculado como o retorno sobre o investimento, que é o lucro obtido dividido pelo custo do investimento.
// Neste caso, o ROI é calculado como o lucro total obtido com a venda das plantas dividido pelo custo total de plantar as mesmas plantas.

int roi_calc(int diaAtual, int dia);

int main(){
    std::cout << "Bem vindo ao calculador de ROI do Stardew Valley!\n";
    std::cout << "Este programa calcula o retorno sobre o investimento (ROI) de plantar e colher plantas.\n";
    std::cout << "Preciso que preencha estas informacoes:\n";
    inicio:// Configurações iniciais
    std::cout << "Dia que plantou ou vai plantar?\n";
    std::cin >> diaAtual;
    std::cout << "Dias totais para a planta crescer:\n";
    std::cin>> dia;//Dias para colher!

    roi = roi_calc(diaAtual, dia);//Roi é o calculo da estação divido pelos dias, não pode ser maior que 28!
    if(roi < 1) {
        std::cout << "A planta nao vai crescer a tempo de colher nesta estacao!\n";
        std::cout << "Por favor, escolha uma planta que cresca mais rapido ou plante em um dia diferente.\n";
        goto inicio; // Volta para o início se o ROI for menor que 2
    }
    
    std::cout << "Quantidade que deseja plantar:\n";
    std::cin >> quantidade;
    std::cout << "Custo por cada planta?\n";
    std::cin>> custo;
    std::cout << "Lucro por cada planta?\n";
    std::cin>> lucro;

    std::cout << "Voce recebera $" << std::fixed<<std::setprecision(0)<< quantidade*(lucro+custo) << " ao vender " << quantidade << " unidades" <<std::endl;
    std::cout << "voce pode cultivar " << std::fixed<<std::setprecision(0)<< roi << " vez com a quantidade de " << quantidade <<", lucro $"<< roi*quantidade*lucro << " total $" << roi*quantidade*(lucro+custo) << std::endl;
    system("pause");
    return 0;
}

int roi_calc(int diaAtual, int dia){
    return (mes - diaAtual) / (dia+1); // Calcula o ROI baseado no dia atual e nos dias necessários para a planta crescer
}