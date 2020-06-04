[@react.component]
let make = (~name) =>
  <div> {ReasonReact.string("Hello " ++ name ++ "!")} </div>;