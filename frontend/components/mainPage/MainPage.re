[@react.component]
let make = () =>
  <MaterialUi_WithStyles
    classes=SharedClasses.classes
    render={classes =>
      MaterialUi.(
        <>
          <NavBar classes />
          <main>
            <Container maxWidth=`Md>
              <Paper className=classes##mainPaper elevation={`Int(3)}>
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
                {React.string("test")}
                <br />
                <br />
              </Paper>
            </Container>
          </main>
          <footer className=classes##footer>
            <Container maxWidth=`Md>
              <Typography variant=`Caption gutterBottom=true>
                {React.string(
                   "This is a footer, maybe some licensing info or copywrite or privacy info.",
                 )}
              </Typography>
            </Container>
          </footer>
        </>
      )
    }
  />;