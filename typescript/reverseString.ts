const reverseString = (str: string):string =>
    str
        .split('')
        .reverse()
        .join('')

reverseString('Hacktoberfest');