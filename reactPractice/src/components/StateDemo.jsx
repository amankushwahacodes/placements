import { useState } from "react";
import ChildrenDemo from "./ChildrenDemo";
import NameFormDemo from "./NameFormDemo";
import DataFetch from "./DataFetch";

function RenderFruit({ fruit }) {
    return (
        <h2>I am {fruit}</h2>
    )
}

function StateDemo() {
  const [count, setCount] = useState(0);
  const fruits = ["apple", "mango", "bnana", "strawberry"];

  return (
    <div>
      <button onClick={() => setCount((count) => count + 1)}>
        Click here {count}
      </button>

      <ChildrenDemo>Hi this is me Aman</ChildrenDemo>

      {fruits.map((fruit) => (
        <RenderFruit fruit={fruit} />
      ))}

      <NameFormDemo/>
      <DataFetch/>
    </div>
  );
}

export default StateDemo;
