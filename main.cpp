#include <iostream>
#include <string>
using namespace std;
//declarar funções
void adicionarTarefa (){
    int id[50];
    string titulo;
    string descricao;
    string data;
    int status;
    cout << "------------- NOVA TAREFA ------------" << endl;
    cout << "Id da tarefa: "<< id << endl;
    cout << "Título: "; cin.ignore(); getline(cin, titulo);
    cout << "descrição: "; getline(cin, descricao);
    cout << "data limite (dia/mês/ano): "; getline(cin, data);
    cout << "Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): "; cin >> status;
    cout << "Tarefa adicionada com sucesso!" << endl;
    cout << "--------------------------------------" << endl;
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


    switch (nOpcao){
    case 1: adicionarTarefa(); break;
    case 2: ; break;
    case 3: ; break;
    case 4: ; break;
    case 5: ; break;
    case 6: ; break;
    case 0: ; break;
    default:
        break;
    }

    return 0;
}