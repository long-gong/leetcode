def square_curly_bracket(str):
    o = str.replace('[', '{')
    o = o.replace(']', '}')
    return o


if __name__ == '__main__':
    s = """ [[0,1,100],[1,2,100],[0,2,500]]"""
    print(square_curly_bracket(s))