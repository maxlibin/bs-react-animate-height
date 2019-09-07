open BsReactAnimateHeight_Utils;

[@bs.module "react-animate-height"] [@react.component]
external make:
  (
    ~height: height => string=?,
    ~duration: int=?,
    ~delay: int=?,
    ~easing: easing=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~contentClassName: string=?,
    ~animationStateClasses: 'a=?,
    ~onAnimationStart: height => unit=?,
    ~onAnimationEnd: height => unit=?,
    ~applyInlineTransitions: bool=?,
    ~animateOpacity: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "AnimateHeight";