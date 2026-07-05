import { useEffect, useState } from "react";

export default function useFetch(url){
    const [data,setData] = useState("");

    async function fetchData() {
        const response   = await fetch(url);
        const result = await data.json();

        if(result) setData(result);

    }

    useEffect(()=> fetchData(), [url]);

    return data;

}