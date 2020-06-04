const path = require('path');

module.exports = [{
  entry: path.resolve(__dirname, 'frontend/Main.bs.js'),
  output: {
    filename: 'main.js',
    path: path.resolve(__dirname, 'src/main/resources/public/dist'),
  },
}, {
     entry: path.resolve(__dirname, 'frontend/Login.bs.js'),
     output: {
       filename: 'login.js',
       path: path.resolve(__dirname, 'src/main/resources/public/dist'),
     },
}];