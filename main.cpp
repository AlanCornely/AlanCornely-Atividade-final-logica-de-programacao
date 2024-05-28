#include <iostream>
#include <string>
using namespace std;

const int maxTarefas = 50;
int ids[maxTarefas];
string titulo[maxTarefas];
string descricao[maxTarefas];
int status[maxTarefas];
int numTarefas = 0;

int gerarID() {
    static int proximoID = 1; // Inicializa o próximo ID como 1 na primeira chamada da função
    if (proximoID > 50){
        cout << "full" << endl;
    }
        return proximoID++;
}

int IDAnterior(){
    int novoID;
    int idAntes;
    idAntes = novoID - 1;
    return idAntes;
}

void data(){
    int dia, mes, ano;
    cout << "dia: "; cin >> dia;
    cin.ignore();
    cout << "mês: "; cin >> mes;
    cin.ignore();
    cout << "ano: "; cin >> ano;
    cin.ignore();
}

void adicionarTarefa() {
    int dia, mes, ano;
    cout << "-----adicionar Nova Tarefa-----"<<endl;
    int novoID = gerarID(); 
    ids[maxTarefas] = novoID;
    cout << "ID: " << novoID << endl;
    cout << "titulo: "; getline(cin, titulo[numTarefas]);
    cout << "descrição: "; getline(cin, descricao[numTarefas]);
    cout << "dia: "; cin >> dia; cin.ignore();
    cout << "mês: "; cin >> mes; cin.ignore();
    cout << "ano: "; cin >> ano; cin.ignore();
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
    cout << "-----lista de tarefas-----"<<endl;
    for (int i = 0; i < numTarefas; i++) {
        cout << "ID: " << IDAnterior << endl;
        cout << "titulo: " << titulo[i] <<endl;
        cout << "descrição: " << descricao[i] <<endl;
        //var data = dia << "/" << mes << "/" << ano << endl;
        cout << " " << data;
        cout << "status: ";
        if (status[i] == 1) {
            cout << "pendente" <<endl;
        } else if (status[i] == 2) {
            cout << "em progresso" << endl;
        } else if (status[i] == 3) {
            cout << "concluída" << endl;
        }
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

        switch(opcao){
            case 1:adicionarTarefa(); break;
            case 2:visualizar(); break;
            case 3: cout << "Editar Tarefa" << endl; break;
            case 4: cout << "Remover Tarefa" << endl; break;
            case 5: cout << "Buscar Tarefa" << endl; break;
            case 6: cout << "Filtrar Tarefas por nome" << endl; break;
            case 0: cout << "\nencerrando..." <<endl; return 0; break;
        } 
    } while (opcao != 0);
    return 0;
}