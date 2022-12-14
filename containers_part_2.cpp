#include <iostream>
#include <array> //Контейнер обычного классического массива
#include <stack> //Контейнер стек работает по принципу LIFO - Last in, First out.
//У стека есть две операции - добавить элемент сверху и снять его сверху. В некоторых задачах нашего курса очень удобно его использовать

int main()
{
    std::array<int, 3> arr {1, 2, 3};
    //В целом все тоже самое, что у вектора, но нельзя изменять размер
    //соответствено, нет методов .push_back(), .resize()

    //обращение -- либо через .at() и []

    arr.at(2) = arr[0];

    //В целом все просто -- теперь к стеку

    std::stack<double> our_stack; // Создали stack с элементами типа double

    our_stack.push(1.2); // Положили на вершину стэка 1.2
    our_stack.push(1.5); // Положили на вершину стэка 1.5

    //Если хотим узнать, что лежит сверху -- используем .top()
    std::cout << "Что же лежит на верщине стэка? А вот что: " << our_stack.top() << std::endl;
    //Изменили?
    our_stack.top() = 10.;

    //У стэка убирается только верхний элемент
    our_stack.pop();

    std::cout << "Сделали .pop() --- вершиной стал предыдущий элемент: " << our_stack.top() << std::endl;

    std::cout << "Ну еще можно размер узнать: " << our_stack.size() << std::endl; //Можно еще узнать, пуст ли стэк --- .empty()


    // Итераторы
    return 0;
}