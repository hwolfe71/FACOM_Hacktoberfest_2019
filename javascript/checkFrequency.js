let frequency={};
const checkfrequency=(str)=>{
    for(let i=0;i<str.length;i++){
        if(frequency[str[i]]===undefined){
           frequency[str[i]]=1;
        }
        else{
           frequency[str[i]]+=1; 
        }
    }
    return frequency;
};


checkfrequency("jkfufkussss");