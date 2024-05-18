#include <iostream>
#include <string>
using namespace std;
//declarar funções
void adicionarTarefa (){
    int id[50];
    string titulo[3000];
    cout << "------------- NOVA TAREFA ------------" << endl;
    cout << "Id da tarefa: " ;
    cout << "Título: "; 
    cout << "descrição: ";
    cout << "data limite: ";
    cout << "Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): 1";
    cout << "Tarefa adicionada com sucesso!";
}


int main(){
    // corpo principal do código
    int nOpcao;
    cout << "--------------------------------------" << endl;
    cout << "1. Adicionar Tarefa" << endl;
    cout << "2. Visualizar Tarefas" << endl;
    cout << "3. Editar Tarefa" << endl;
    cout << "4. Remover Tarefa" << endl;
    cout << "5. Buscar Tarefa" << endl;
    cout << "6. Filtrar Tarefas por nome" << endl;
    cout << "0. Sair" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Escolha uma opção: ";
    cin >> nOpcao;


}