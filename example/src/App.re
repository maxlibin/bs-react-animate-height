open BsReactAnimateHeight;
open Utils;

[@react.component]
let make = () => {
  let (height, setHeight) = React.useState(_ => Zero);

  let toggle = _ => setHeight(_ => height == Zero ? Auto : Zero);

  <div>
    <button onClick=toggle> "Toggle"->ReasonReact.string </button>
    <AnimateHeight duration=500 height={_ => height->unwrapHeight}>
      <h1> "Your content goes here"->ReasonReact.string </h1>
      <p> "Put as many React or HTML components here."->ReasonReact.string </p>
    </AnimateHeight>
  </div>;
};