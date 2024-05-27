#include <iostream>
#include <string>
using namespace std;

const int maxTarefas = 50;
int ids[maxTarefas];
string titulos[maxTarefas];
string descricao[maxTarefas];
string data[maxTarefas];
int status[maxTarefas];
int numTarefas = 0;

void adicionarTarefa() {
    cout << "-----adicionar Nova Tarefa-----"<<endl;
    cout << "ID: "; cin >> ids[numTarefas]; cin.ignore(); 
    cout << "titulo: "; getline(cin, titulos[numTarefas]);
    cout << "descrição: ";getline(cin, descricao[numTarefas]);
    cout << "data (dd/mm/yyyy): "; getline(cin, data[numTarefas]);
    cout << "status (1 - pendente, 2 - em Progresso, 3 - concluída): ";
    cin >> status[numTarefas];

    if (status[numTarefas] >= 1 && status[numTarefas] <= 3) {
        cout << "-----tarefa adicionada com sucesso!-----"<<endl;
        numTarefas++;
    }else {
        cout << "!!não foi possível salvar a tarefa!!"<<endl;
    }
     system("clear");
}

void visualizar() {
    system("clear");
    cout << "lista de tarefas\n";
    for (int i = 0; i < numTarefas; i++) {
        cout << "ID: " << ids[i] << ", titulo: " << titulos[i] << ", descrição: " << descricao[i]
        << ", data de vencimento: " << data[i] << ", status: ";
        if (status[i] == 1) {
            cout << "pendente";
        } else if (status[i] == 2) {
            cout << "em progresso";
        } else if (status[i] == 3) {
            cout << "concluída";
        }
        cout << "" <<endl;
    }
}
int main(){
    int opcao;

    do {
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
    cin >> opcao;
    system("clear");

    switch(opcao){
    case 1:adicionarTarefa(); break;
    case 2:visualizar(); break;
    case 3: ; break;
    case 4: ; break;
    case 5: ; break;
    case 6: ; break;
    case 0: cout << "encerrando..." <<endl; return 0; break;
    } while (opcao > 6){
        cout << "opção invalida, escolha outra opção: "; cin << opcao;
    }
}
}