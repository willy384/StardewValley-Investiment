#include <iostream>
#include <iomanip>

int dinheiro,venda,compra,lucro,custo,quantidade,inventario(0);

int main(){
    std::cout << "Preencha com suas informacoes!";
    std::cout << "Seu Dinheiro:";
    std::cin >> dinheiro;
    std::cout << "Custo Por Semente:";
    std::cin >> custo;
    std::cout << "Lucro Bruto:";
    std::cin >> lucro;

    quantidade=(dinheiro/custo);
    std::cout << "Voce pode comprar " << quantidade << " unidades"<< std::endl;
    std::cout <<  "Quantos quer? ";

    do{
        std::cin >> compra;
    }while(compra >= quantidade && compra < 0);
    std::cout << "Possui algum no inventario ";
    std::cin >> inventario;
    quantidade=compra;
    compra=quantidade*custo;
    dinheiro-=compra;
    venda=(custo+lucro)*(quantidade+inventario);
    dinheiro+=venda;

    //imprimre resultado
    std::cout << "Voce gastou " << compra << " em " << quantidade << " unidades e tinha " << inventario << " unidades, somando um total de " << quantidade+inventario << std::endl; 
    std::cout << "Vendeu "<< quantidade+inventario << " unidades por " << custo+lucro << " cada " << std::endl; 
    std::cout << "Terminou o dia com o lucro de " << lucro*(quantidade+inventario) << std::endl;
    std::cout << "Saldo atual "<< dinheiro << std::endl;
    system("pause");
    system("cls");

return 0;
}
