def square_curly_bracket(str):
    o = str.replace('[', '{')
    o = o.replace(']', '}')
    return o


if __name__ == '__main__':
    s = """[
   [ 1,  5,  9],
   [10, 11, 13],
   [12, 13, 15]
]"""
    print(square_curly_bracket(s))