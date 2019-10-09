
const listToString = (strs: string[]): string =>
    strs.reduce((acc,val)=> `${acc}${val}`, '')

listToString(['h','e','l','l','o']);