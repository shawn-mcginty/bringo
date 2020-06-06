open Belt.Option;

[@bs.deriving jsConverter]
type color = [
  | [@bs.as "default"] `Default
  | [@bs.as "error"] `Error
  | [@bs.as "inherit"] `Inherit
  | [@bs.as "primary"] `Primary
  | [@bs.as "secondary"] `Secondary
  | [@bs.as "textPrimary"] `TextPrimary
  | [@bs.as "textSecondary"] `TextSecondary
];

[@bs.deriving jsConverter]
type fontSize = [
  | [@bs.as "default"] `Default
  | [@bs.as "inherit"] `Inherit
  | [@bs.as "small"] `Small
  | [@bs.as "large"] `Large
];

[@bs.obj]
external makePropsIcon:
  (
    ~className: string=?,
    ~color: string=?,
    ~fontSize: string=?,
    ~nativeColor: string=?,
    ~titleAccess: string=?,
    ~viewBox: string=?,
    unit
  ) =>
  _;

module type IconClass = {let reactClass: React.component('a);};

module Make = (Icon: IconClass) => {
  include Icon;

  [@react.component]
  let make =
      (
        ~color: option(color)=?,
        ~className: option(string)=?,
        ~fontSize: option(fontSize)=?,
        ~nativeColor: option(string)=?,
        ~titleAccess: option(string)=?,
        ~viewBox: option(string)=?,
      ) =>
    React.createElement(
      reactClass,
      makePropsIcon(
        ~className?,
        ~color=?color->map(colorToJs),
        ~fontSize=?fontSize->map(fontSizeToJs),
        ~nativeColor?,
        ~titleAccess?,
        ~viewBox?,
        (),
      ),
    );
};

module AccountCircleFilled =
  Make({
    [@bs.module "@material-ui/icons/AccountCircle"]
    external reactClass: React.component('a) = "default";
  });

module AccountCircleOutlined =
  Make({
    [@bs.module "@material-ui/icons/AccountCircleOutlined"]
    external reactClass: React.component('a) = "default";
  });

module AccountCircleRounded =
  Make({
    [@bs.module "@material-ui/icons/AccountCircleRounded"]
    external reactClass: React.component('a) = "default";
  });

module AccountCircleSharp =
  Make({
    [@bs.module "@material-ui/icons/AccountCircleSharp"]
    external reactClass: React.component('a) = "default";
  });

module AccountCircleTwoTone =
  Make({
    [@bs.module "@material-ui/icons/AccountCircleTwoTone"]
    external reactClass: React.component('a) = "default";
  });

//LockOpen
module LockOpenFilled =
  Make({
    [@bs.module "@material-ui/icons/LockOpen"]
    external reactClass: React.component('a) = "default";
  });

module LockOpenOutlined =
  Make({
    [@bs.module "@material-ui/icons/LockOpenOutlined"]
    external reactClass: React.component('a) = "default";
  });

module LockOpenRounded =
  Make({
    [@bs.module "@material-ui/icons/LockOpenRounded"]
    external reactClass: React.component('a) = "default";
  });

module LockOpenSharp =
  Make({
    [@bs.module "@material-ui/icons/LockOpenSharp"]
    external reactClass: React.component('a) = "default";
  });

module LockOpenTwoTone =
  Make({
    [@bs.module "@material-ui/icons/LockOpenTwoTone"]
    external reactClass: React.component('a) = "default";
  });