open BsReactAnimateHeight_Utils;

[@bs.module "react-animate-height"] [@react.component]
external make:
  (
    ~height: Height.output=?,
    ~duration: int=?,
    ~delay: int=?,
    ~easing: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~contentClassName: string=?,
    ~animationStateClasses: 'a=?,
    ~onAnimationStart: Height.output => unit=?,
    ~onAnimationEnd: Height.output => unit=?,
    ~applyInlineTransitions: bool=?,
    ~animateOpacity: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";