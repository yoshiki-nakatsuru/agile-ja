# チャレンジ: テストと検証

## 説明
テストに関する知識を活用し、次の要件を満たすようにしてください。
- このチャレンジで必須の要件は「富士」だけです。
- 「キリマンジャロ」と「エベレスト」はオプションです。これらの要件は、皆さんのスキルを高めるために難しい問題になっています。場合によっては、このコースで説明していないトピックについて自分で調べる必要があります。

## 要件
以下のスクリプトの中に、次の2つの引数を受け取る関数 `my_assert` をPythonで記述してください。 
1. `expr` はブール値として評価される式です。
2. `msg` はオプションのメッセージであり、`expr` が `false` と評価された場合に返されます。

関数には次の機能も含めてください。
- `expr` 引数が指定されていない場合は、エラーメッセージ「No expression provided」(式を指定していません) を返します。
- `msg` が指定されていない場合は、一般的なエラーメッセージを使用します。

次に、`my_assert` を使用して、ここに書かれている関数をテストします。「#---- ここにコードを書いてください ----」というコメント以降にコードを書いてください。

```python
#---- ここにある関数を変更する必要はありません ----
names = ["Nick", "Lewis", "Nikos"]

def contains(name, list_of_names):
    if name not in list_of_names:
        return False
    else:
        return True

def get_name(name, list_of_names):
    if name in list_of_names:
        return name
    else:
        return "[undefined]"

def add_name(name, list_of_names):
    list_of_names.append(name)
    return name

def add_two(num):
    return num + 2

def divide_by_two(num):
    return num / 2

def greeting(name, num):
    message = f"Hello, {name}.It is {num} degrees warmer today than yesterday"
    print(message)
    return message

#---- ここにコードを書いてください ----
#---- 難易度: 富士 ----

# `my_assert` をここに定義し、以降のテストに使用してください。

# `contains` のテストをここに書いてください。

# `getName` のテストをここに書いてください。

# `addName` のテストをここに書いてください。

# `addTwo` のテストをここに書いてください。

# `divideByTwo` のテストをここに書いてください。

# `greeting` のテストをここに書いてください。


#---- 難易度: キリマンジャロ ----

# `my_assert` のテストを書いて、指定したオプションの `msg` が適切に返されるかどうかを確認します。

# `my_assert` 関数のテストを書いてください。`my_assert` 関数を使用して、`expr` を指定しない場合にエラーが適切に返されるかどうかを確認します。



#---- 難易度: エベレスト ----
# `my_assert` を使用して、次の式全体をテストします。式がエラーになった場合はその理由を表示するように、`msg` にわかりやすいメッセージを指定してください。
greeting(get_name("Frosty the Snowman"), divide_by_two(add_two(2)))


```



## 提出するもの
作成したコードをこちらに提出してください: [プレースホルダー]