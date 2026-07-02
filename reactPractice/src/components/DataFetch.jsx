import { useEffect, useState } from "react"

function DataFetch() {
    const [data , setData] = useState("");

    useEffect(()=> async function fetchData(){
        const response = await fetch(
          'https://www.apicountries.com/alpha/IN'
         
        );
        const result = await response.json();

        console.log(result)

        if(result) setData(result)
        
    },[]);



    return (
        <div>
            {/* {data ? data : "Loading"} */}
        </div>
    )
}

export default DataFetch
