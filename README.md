Задача

Дано поле 10 х 10 позиций. Позиции поля заполнены 0 и 1. Отметки 1 следуют непрерывно от левого края поля к правому и состоят из вертикальных и горизонтальных групп единиц.
Необходимо определить местоположение единицы входа и далее, двигаясь по единицам, заменить их на букву F.

Использовать объекты:
1. Для ввода исходного содержимого поля.
2. Для определения наличия 1 сверху от текущей позиции.
3. Для определения наличия 1 справа от текущей позиции.
4. Для определения наличия 1 снизу от текущей позиции.
5. Для выполнения очередного шага.
6. Для вывода результата.

В обработчике объектов определения местоположения очередной единицы реализовать алгоритм:
1. Выполняется поиск направления шага согласно назначению объекта.
2. Если направление шага найдено, объект выдает «signal_1»
3. Иначе объект выдает «signal_2»

В обработчике объекта выполнения очередного шага реализовать алгоритм:
1. Выполняется соответствующий шаг и производится замена 1 на F.

Написать программу, реализующую следующий алгоритм:
1. Ввод исходного заполнения поля.
2. Поиск координаты исходной единицы (располагается по левому краю по-ля).
3. В цикле реализовать такт очередного шага.
    3.1. Выдается сигнал для начала поиска очередной единицы.
    3.2. Если хода нет, то выход из цикла.
4. Вывод на консоль содержимого поля 10 х 10.

Входные данные
Построчно множество нулей и единиц.
Задаются построчно, по десять символов в строке без пробелов.

Выходные данные
Десять строк по десять символов в каждой, согласно сформированному полю.
