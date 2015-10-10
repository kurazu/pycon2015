def main():
    a = Trackable('1')
    b = Trackable('2')
    a = b  # '1' object is no longer needed
    b = Trackable('3')  # '2' is referred by 'a' variable
    del b # '3' object is no longer needed
    a # '2' object will be freed when the function ends

if __name__ == '__main__':
    main()
    print('END')
