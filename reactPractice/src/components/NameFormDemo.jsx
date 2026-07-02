import { useState } from "react";

function NameFormDemo() {

    const [name , setName] = useState("");

    console.log(name);
    return (
        <div>
            <input type="text" value={name} onChange={(e)=>{setName(e.target.value)}} />
        </div>
    )
}

export default NameFormDemo
