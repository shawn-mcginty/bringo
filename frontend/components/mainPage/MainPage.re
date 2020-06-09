[@react.component]
let make = () =>
  <MaterialUi_WithStyles
    classes=SharedClasses.classes
    render={classes =>
      MaterialUi.(<section> <Container maxWidth=`Md /> </section>)
    }
  />;