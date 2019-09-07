module Height = {
  type t =
    | Auto
    | Pct(float)
    | Px(int)
    | Zero;

  type output =
    | Str(string)
    | Int(int);

  let unwrap =
    fun
    | Auto => Str("auto")
    | Pct(percent) => Str({j|$(percent)%|j})
    | Px(pixel) => Str({j|$(pixel)px|j})
    | Zero => Int(0);
};

module Easing = {
  type easing =
    | Ease
    | Linear
    | EaseIn
    | EaseOut
    | EaseInOut
    | CubicBezier(float, float, float, float);

  let unwrapEasing =
    fun
    | Ease => "ease"
    | Linear => "linear"
    | EaseIn => "ease-in"
    | EaseOut => "ease-out"
    | EaseInOut => "ease-in-out"
    | CubicBezier(x1, y1, x2, y2) => {j|cubic-bezier($y1, $y2, $x1, $x2)|j};
};