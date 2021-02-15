import time
from random import randint

print('Приветствую, это игра "Угадай число".')
print('Вам предстоит отгадать число от 1 до 10000. Я дам вам 15 попыток.')
print('Компьютер скажет вам, если вы ошибетесь, больше или меньше ваше число числа загаданного.')
print('Кажется, сложновато отгадать число в таком большом диапазоне за 15 попыток.')
print('Но вам легко это удастся, если использовать оптимальный алгоритм.\n')

def base_game():
    attempt = 1
    number = randint(1, 10000)
    while attempt <= 15:
        guess = int(input('Введите свое число: '))
        if guess == number:
            print('Победа.')
            print('Поздравляю, вы молодец.', 'Спасибо за внимание!\n')
            repeat()
        elif guess > number:
            print('Ваше число больше загаданного.\n')
            attempt += 1
        elif guess < number:
            print('Ваше число меньше загаданного.\n')
            attempt += 1
    
    print('Поражение')
    print('Не беда, попробуйте еще.\n')
    repeat()
    
def repeat():
    us_answ = input('Введите "more", если хотите сыграть еще: ')
    if us_answ == 'more':
        base_game()

base_game()
