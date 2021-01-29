def split_and_join(line):
    n = line.split()
    n = "-".join(n)
    return n
    
if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
