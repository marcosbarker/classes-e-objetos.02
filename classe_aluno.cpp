class Aluno{
    private:
        string nome;
        string email;
        float av1;
        float av2;
        float av3;

    public:
        void setnome(string _nome){
        nome = _nome;
        }

		string getnome(){
        return nome;
        }

        void setemail(string _email){
        email = _email;
        }

        string getemail(){
        return email;
        }

        void setav1(float _av1){
        av1 = _av1;
        }

        float getav1(){
        return av1;
        }

        void setav2(float _av2){
        av2 = _av2;
        }

        float getav2(){
        return av1;
        }

        void setav3(float _av3){
        av3 = _av3;
        }

        float getav3(){
        return av3;
        }

        bool isAprovado(){
        float media = ((av1 + av2)/2);
			if(media > 7.0){
        return true;

            }else{

        return false;
          }
        }

        bool podeFazerAV3(){
        float media = ((av1 + av2)/2);
            if(media > 4.0){
        return true;

            }else{

        return false;
          }
        }

        float getNotaFinal(){
        float media = ((av1 + av2 + av3)/3);
        return media;
        }

        void salvar(string file){
            ofstream dados;
            dados.open(file);
            dados << nome << "\n";
            dados << email << "\n";
            dados << av1 << "\n";
            dados << av2 << "\n";
            dados << av3 << "\n";
            dados.close();
        }

        void ler(string file){
            ifstream dados;
            string linha;
            dados.open(file);
            if(dados.is_open()){
            hile(getline(dados, linha)){
            cout << linha;
            }

            dados.close();

            }else{
        }
      }
    };
    
int main(){
    string x = "file.txt";
    Aluno a;
    a.setnome("nome");
    a.setemail("email");
    a.setav1(10.0);
    a.setav2(6.0);
    a.setav3(5.0);
    cout << (a.isAprovado()? "veradeiro" : "falso" ) << "\n";
    cout << (a.podeFazerAV3() ? "veradeiro" : "falso" ) << "\n";
    cout << (a.getNotaFinal() ? "veradeiro" : "falso") << "\n";
    a.salvar(x);
    a.ler(x);
}