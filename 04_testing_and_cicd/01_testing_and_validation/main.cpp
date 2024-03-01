#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>

/*----これらの関数を変更する必要はありません----*/

bool contains(const std::string& name, const std::vector<std::string>& list_of_names) {
    return std::find(list_of_names.begin(), list_of_names.end(), name) != list_of_names.end();
}

std::string get_name(const std::string& name, const std::vector<std::string>& list_of_names) {
    if (contains(name, list_of_names)) {
        return name;
    } else {
        return "";
    }
}

void add_name(const std::string& name, std::vector<std::string>& list_of_names) {
    list_of_names.push_back(name);
}

int add_two(int num) {
    return num + 2;
}

double divide_by_two(double num) {
    return num / 2;
}

std::string greeting(const std::string& name, double num) {
    std::string message {"Hello, " + name + ". It is " + std::to_string(num) + " degrees warmer today than yesterday"};
    std::cout << message << std::endl;
    return message;
}

/*----ここにコードを書いてください----*/
/*----難易度: 富士----*/

// `my_assert` をここに定義し、以降のテストに使用してください。
void my_assert(bool expr, std::string msg){
    if(expr){
        std::cout << "passed test" << std::endl;
    } else{
        throw std::runtime_error(msg);
    }
}

// `contains` 用のテスト `test_contains` を作成してください
void test_contains(){
    std::vector<std::string> names = {"Nick","Lewis","Nikos"};

    try{
        bool result = contains("Nick",names);
        my_assert(result == true,"Err: Misinterpretation of included name");
        result = contains("Foo",names);
        my_assert(result == false,"Err: Misinterpretation of name not included ");
    }catch(std::runtime_error e){
        std::cerr << e.what() << std::endl;
    }
}
// `get_name` 用のテスト `test_get_name` を作成してください
void test_add_name(){
    std::vector<std::string> names = {"Nick","Lewis","Nikos"};

    try{
        std::string test_name = "Nick";
        std::string result = get_name(test_name,names);
        my_assert(result == test_name,"Err: can't get name");

        std::string test_err_name = "nick";
        result = get_name(test_err_name,names);
        my_assert(result == "","Err: get wrong name");
    }catch(std::runtime_error e){
        std::cerr << e.what() << std::endl;
    }
}

// `add_name` 用のテスト `test_add_name` を作成してください
void test_get_name(){
    std::vector<std::string> names = {"Nick","Lewis","Nikos"};

    try{
        std::string name = "Tom";
        int vector_size = names.size();
        add_name(name,names);
        bool result = false;
        if((names.size() == (vector_size + 1)) && (names[names.size() - 1] == name)){
            result = true;
        }
        my_assert(result, "Err:funciton couldn't add name");
    }catch(std::runtime_error e){
        std::cerr << e.what() << std::endl;
    }
}
// `add_two` 用のテスト `test_add_two` を作成してください
void test_add_two(){
    

    try{
        int base = 5;
        int calc = add_two(base);
        bool result = false;
        if(calc == (base + 2)){
            result = true;
        }
        my_assert(result, "Err:funciton couldn't add 2");
    }catch(std::runtime_error e){
        std::cerr << e.what() << std::endl;
    }
}
// `divide_by_two` 用のテスト `test_divide_by_two` を作成してください
void test_divide_by_two(){

    try{
        double base = 5;
        double calc = divide_by_two(base);
        bool result = false;
        if(calc == (base / 2)){
            result = true;
        }
        my_assert(result, "Err:funciton couldn't divide by 2");
    }catch(std::runtime_error e){
        std::cerr << e.what() << std::endl;
    }
}
// `greeting` 用のテスト `test_greeting` を作成してください
void test_greeting(){

    try{
        
        std::string ans = "Hello, Tom. It is 2.500000 degrees warmer today than yesterday";
        std::string greet = greeting("Tom",2.500000);
        bool result = false;
        if(ans == greet){
            result = true;
        }
        my_assert(result, "Err:funciton couldn't currect greeting");
    }catch(std::runtime_error e){
        std::cerr << e.what() << std::endl;
    }
}

/*----難易度: キリマンジャロ----*/

// `my_assert` 用のテスト `test_my_assert_false` を作成し、式がfalseと評価されたときに指定したオプションの `msg` を適切に返すかどうかをチェックしてください。

// `my_assert` 用のテスト `test_my_assert_true` を作成し、式がtrueと評価されたときに適切に処理するかどうかをチェックしてください。

/*----難易度: エベレスト----*/

// 次の式全体をテストする `test_complex_greeting` を `my_assert` を使用して作成してください。式がエラーになった場合は、エラーの理由がわかるメッセージを `msg` に指定してください。
// greeting(get_name("Frosty the Snowman", {"Oatmeal", "Prancer", "Rudolph", "Andy"}), divide_by_two(add_two(2)));

int main(){
    test_contains();
    test_get_name();
    test_add_name();
    test_add_two();
    test_divide_by_two();
     test_greeting();
}