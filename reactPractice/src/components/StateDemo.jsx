import {useState } from "react";
import ChildrenDemo from "./ChildrenDemo";

function StateDemo() {
    const [count , setCount] = useState(0);




    return (
        <div>
            <button onClick={()=>setCount(count => count +1)} >
                Click here {count}
            </button>

            
            <ChildrenDemo>
                Hi this is me Aman
            </ChildrenDemo>
        </div>
    )
}

export default StateDemo
