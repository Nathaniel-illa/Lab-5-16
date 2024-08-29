
def main():
    import os

    if not os.path.exists('students.txt'):
        result = False

    with open('students.txt') as fileobj:
        lines = fileobj.readlines()
        numoflines = len(lines)
        print('Num of lines: ', numoflines)
        if numoflines != 6:
            result = False


    lastline = lines[numoflines-1].split()
    if lastline[0] != 'Heather' or lastline[1] != '100' or lastline[2] != '90':
        result = False

    result = True
    return result

if __name__ == '__main__':
    main()


# with open('students.txt') as fileobj:
#     for r in fileobj:
#         print(r)


# with open('students.txt') as fileobj:
#     while True:
#         r = fileobj.readline()
#         if not r:
#             break
#         print(r.strip('\n'))
