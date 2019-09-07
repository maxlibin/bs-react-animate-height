# Bs React Animate Height

## Note

This is a reasonml binding React animate height component https://github.com/Stanko/react-animate-height

## Demo

```
open BsReactAnimateHeight;
open Utils.Height;

[@react.component]
let make = () => {
  let (height, setHeight) = React.useState(_ => Zero);

  let toggle = _ => setHeight(_ => height == Zero ? Auto : Zero);

  <div>
    <button onClick=toggle>
      (height == Zero ? "Open" : "Close")->ReasonReact.string
    </button>
    <AnimateHeight duration=500 height={height->unwrap}>
      <h1> "Your content goes here"->ReasonReact.string </h1>
      <p> "Put as many React or HTML components here."->ReasonReact.string </p>
    </AnimateHeight>
  </div>;
};
```