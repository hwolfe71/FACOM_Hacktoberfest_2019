
const checkfrequency = (str: string): number =>
    str.split('').reduce((acc,val) => acc+1, 0)

checkfrequency("jkfufkussss");